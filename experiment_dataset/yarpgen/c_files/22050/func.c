/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22050
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
    var_13 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), ((((-(-6016993352190563399LL))) != (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 2])))))))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (max((-6016993352190563407LL), (((/* implicit */long long int) (_Bool)0))))));
                        }
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 - 2])) - (((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 + 1])))) - ((-(((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 2] [i_3] [i_3 - 1]))))));
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1966964605639109031LL)) ? (((/* implicit */int) (unsigned short)22443)) : (((/* implicit */int) (signed char)-35))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        arr_14 [i_0] = ((/* implicit */signed char) -1966964605639109043LL);
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
            {
                {
                    var_17 += ((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((min((6016993352190563406LL), (((/* implicit */long long int) 1187889941U)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_6]))))))))));
                    var_18 = ((/* implicit */unsigned long long int) var_12);
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 0U);
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_6 + 1])) - (((/* implicit */int) arr_2 [i_6 - 1]))))) / (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)102))) : (-3027992908727287476LL)))));
                    arr_21 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */long long int) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73)))))) : (((-2020877367430166731LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1984)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0])))))) : (max((((long long int) arr_4 [i_0] [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (3864649729U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_21 = ((/* implicit */long long int) var_6);
}
