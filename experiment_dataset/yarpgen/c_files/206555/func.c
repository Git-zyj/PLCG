/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206555
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_1] = min(((unsigned char)103), ((unsigned char)152));
                                arr_15 [i_1] [i_3] [i_3] = ((/* implicit */int) max(((unsigned char)110), ((unsigned char)152)));
                                var_12 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)152)) ? ((-(((/* implicit */int) (unsigned char)103)))) : (((/* implicit */int) (unsigned char)162)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_18 [(unsigned char)6] [i_2 - 1] [(unsigned char)6] = ((/* implicit */long long int) max(((unsigned char)103), ((unsigned char)96)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] &= ((((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) / (min((var_8), (((/* implicit */int) arr_21 [i_6 + 2] [i_6 + 1] [i_6 + 2] [(_Bool)1] [i_6] [(signed char)21]))))))) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) ((((/* implicit */int) var_11)) >= ((~(((/* implicit */int) arr_10 [i_0]))))))));
                            var_13 = ((/* implicit */unsigned short) var_7);
                        }
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned char)103)) : (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (unsigned char)98))))));
                        var_15 |= ((/* implicit */unsigned short) arr_20 [i_2]);
                    }
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)161)) >= (((/* implicit */int) (unsigned char)141))))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                arr_29 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (unsigned char)88)))), (((((/* implicit */int) arr_10 [i_0])) & (((/* implicit */int) ((_Bool) var_7)))))));
                                var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)136)) * (((/* implicit */int) (unsigned char)102))))));
                                arr_30 [i_0] [i_1] [i_2] [i_7] [i_8] |= ((/* implicit */short) arr_25 [i_0] [i_8] [i_2 + 1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 1; i_9 < 22; i_9 += 4) 
    {
        var_18 -= ((/* implicit */short) (unsigned char)102);
        var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)159)) * (((((/* implicit */int) arr_2 [i_9] [i_9])) + (((/* implicit */int) max((arr_0 [(_Bool)1]), (var_7))))))));
    }
    var_20 = ((/* implicit */short) (unsigned char)152);
    var_21 = ((/* implicit */short) min((((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)88)) % (((/* implicit */int) (unsigned char)103)))) > (((/* implicit */int) var_9))))), (var_6)));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)142)) || (((/* implicit */_Bool) (unsigned char)87))));
}
