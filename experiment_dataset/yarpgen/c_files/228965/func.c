/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228965
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */int) var_3);
    var_20 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-11505))));
    var_21 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)32256))))), (var_18))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)29196))))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_4 [i_0 - 1] [i_2 + 1] [i_3 - 1])))) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) 279997749))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3])) ? (((/* implicit */int) (unsigned short)32270)) : (((/* implicit */int) (unsigned short)32256)))) : (((/* implicit */int) (unsigned short)28432)))))));
                                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)33278)) : (((/* implicit */int) (_Bool)1))))), (arr_3 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */long long int) arr_2 [i_2 + 2] [i_2]);
                }
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_5] [i_7] [i_7] = ((/* implicit */short) (+(-2147483647)));
                                var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0] [(short)11] [i_6 - 2])) ? (var_4) : (var_15))), (((/* implicit */unsigned int) arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6 + 1]))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((-1737693909) / (-1737693897))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15123)) | (((/* implicit */int) (signed char)-40))))) ? (1737693924) : (((/* implicit */int) (short)2637))))));
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */short) arr_4 [i_1] [(signed char)12] [i_5]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((var_4) / (((/* implicit */unsigned int) var_17))))))));
                        var_27 = ((/* implicit */long long int) (unsigned short)50413);
                        var_28 = ((/* implicit */unsigned short) ((long long int) 7723208897549628153ULL));
                    }
                    arr_25 [i_0 + 1] [i_1] [i_5] &= ((/* implicit */signed char) ((short) (short)-21926));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    arr_29 [(signed char)2] [i_1] [i_9] [i_9] = ((/* implicit */signed char) var_7);
                    var_29 = ((/* implicit */long long int) (_Bool)1);
                }
                arr_30 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (11ULL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_6)) : (var_4))) : (((/* implicit */unsigned int) -2147483627))));
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [(short)11] [i_0] [i_1]))))));
            }
        } 
    } 
}
