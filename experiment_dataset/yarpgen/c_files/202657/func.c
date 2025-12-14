/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202657
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)208));
                    var_19 = ((min((((/* implicit */unsigned long long int) ((short) (signed char)123))), (((unsigned long long int) (short)31237)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8179))));
                    arr_9 [(unsigned short)1] [i_1] [4ULL] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / ((~(((/* implicit */int) (signed char)127)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_22 [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_16 [i_3] [i_4] [i_5]), (((/* implicit */unsigned short) (_Bool)1))))), ((~(((/* implicit */int) var_17))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((18446744073709551599ULL), (((/* implicit */unsigned long long int) arr_15 [i_7] [i_3] [i_3] [i_3]))))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) ((unsigned char) arr_13 [i_3] [i_7]))) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))));
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_4] [i_4] [i_4]))) : (arr_14 [i_3] [i_3])))));
                            arr_27 [(signed char)5] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */short) (~(var_2)));
                        var_23 = ((/* implicit */_Bool) ((unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */signed char) ((long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (arr_28 [i_4] [i_4])))));
                        arr_30 [i_3] [i_3] [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-28)), (arr_12 [i_8] [i_8])))) ? ((-(max((((/* implicit */unsigned int) var_2)), (arr_10 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4] [(signed char)19] [i_8])))));
                    }
                    arr_31 [i_3] [i_3] = ((/* implicit */short) arr_21 [i_4] [i_4] [i_3]);
                }
            } 
        } 
    } 
}
