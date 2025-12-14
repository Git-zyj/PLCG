/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242566
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((int) min((((/* implicit */long long int) arr_0 [i_1])), (7533401665524555534LL))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_10 [(_Bool)0] [13] [i_3] [i_3 + 2] [19] [i_2] [(_Bool)1] = ((((int) arr_9 [i_4 - 2] [i_3] [(unsigned short)17] [i_3] [i_3])) | (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_8 [i_4 - 1] [i_4 + 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1])))));
                                var_18 = ((/* implicit */unsigned short) ((((arr_7 [i_3] [i_3] [i_3] [i_3 - 1]) / (arr_7 [1] [i_3] [i_3] [i_3 - 1]))) & (max((arr_7 [i_3] [i_3] [i_3] [i_3 - 2]), (8438886977796173016LL)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) (-(min((((/* implicit */long long int) arr_2 [i_0])), (((arr_9 [14LL] [i_0] [14LL] [i_0] [i_0]) ? (-8858147641577747383LL) : (-1724196116748294587LL)))))));
                    arr_11 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2] [i_0] [i_1] [i_0] [i_0]))));
                    var_20 = ((/* implicit */long long int) 512);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (-7348470382400282318LL)));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            {
                var_22 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (1724196116748294586LL)))));
                var_23 = max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 66967861)) + (arr_17 [i_5] [i_5]))))))), (min((285985004), ((~(((/* implicit */int) (unsigned short)60669)))))));
                arr_19 [i_5] [(unsigned short)10] [i_5] = ((/* implicit */unsigned short) (-((~(arr_16 [i_5 + 1] [i_5])))));
            }
        } 
    } 
}
