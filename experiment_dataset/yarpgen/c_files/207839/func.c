/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207839
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) (unsigned char)158);
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) ((int) (signed char)-4));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_15))));
        var_20 *= ((/* implicit */unsigned long long int) 2147483647);
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (unsigned char)85))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (int i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_10 [i_2] [i_3]))))))), (var_15)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_8)))));
                            var_24 = ((/* implicit */unsigned char) (signed char)3);
                            var_25 = ((/* implicit */unsigned char) ((unsigned long long int) 5241138739797049838ULL));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14971110614786334291ULL))))) : (((/* implicit */int) (unsigned char)164)))))));
                        }
                    }
                    var_27 = var_15;
                    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) (unsigned char)170)) + (((/* implicit */int) (unsigned char)170)))) | (((/* implicit */int) var_6)))));
}
