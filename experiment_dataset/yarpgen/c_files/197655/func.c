/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197655
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */short) var_12))))) : (((/* implicit */int) max((arr_3 [(signed char)1] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */short) (-(((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 + 1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_18 -= ((unsigned char) (_Bool)1);
                        var_19 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
                    }
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))))));
                }
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))));
    /* LoopSeq 3 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3987520314128577780LL)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned char)154))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4] [i_4] [(unsigned char)14] [i_6]))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) var_10)))))))));
                    var_21 = ((/* implicit */long long int) (!((_Bool)1)));
                    arr_23 [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned short)56843))))) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) <= (4159749014U))))))));
                    arr_24 [i_5] [i_5] [i_6] [i_4] = ((/* implicit */long long int) arr_1 [i_4] [i_5]);
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned int) min((((((((/* implicit */int) (unsigned char)156)) < (((/* implicit */int) var_10)))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), ((~(((/* implicit */int) var_7))))));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_1 [i_7] [i_7]))) + ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)22))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)14))));
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)120))));
        var_25 = max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-21053))))))), ((signed char)-28));
        arr_31 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_30 [i_8]))), (((/* implicit */unsigned int) (_Bool)0))))));
    }
    var_26 = ((/* implicit */unsigned char) var_2);
}
