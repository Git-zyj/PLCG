/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26463
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
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54665)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && ((!(((/* implicit */_Bool) var_2)))))))) : (var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) (signed char)-64))))));
                                arr_11 [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) (~(-9073510906285806661LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned short) (~(var_10)));
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) ^ (2147483638)))) > (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_5] [i_0])) ? (arr_7 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [(signed char)10] [i_0] [i_1 - 1] [18] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_24 = (~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                            arr_18 [i_0] [i_1] [(_Bool)1] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) ((arr_17 [i_1 - 1] [i_2 + 1] [i_2]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 - 1] [i_2 - 1] [i_5])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            var_25 = ((/* implicit */signed char) arr_0 [i_1 - 1]);
                            var_26 = ((/* implicit */_Bool) var_2);
                        }
                        var_27 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                    }
                    for (long long int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) max((-1LL), (((/* implicit */long long int) max(((~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_8])))), (((var_5) >> (((((/* implicit */int) arr_10 [i_8] [i_8] [i_0])) - (102))))))))));
                        arr_24 [i_8] = ((/* implicit */long long int) (+(var_10)));
                        arr_25 [i_8] = ((/* implicit */unsigned long long int) 2147483621);
                        var_29 = ((/* implicit */int) var_0);
                    }
                    var_30 -= ((/* implicit */unsigned long long int) arr_17 [i_2] [i_1 - 1] [i_0]);
                    var_31 = (~(((unsigned long long int) (~(10340162850991611349ULL)))));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(-1733448394)));
                }
            } 
        } 
    } 
}
