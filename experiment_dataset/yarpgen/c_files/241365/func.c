/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241365
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned long long int) ((short) ((unsigned int) -838526400)))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_5 [i_1])) : (8))), (((/* implicit */int) ((_Bool) 5U))))), (((/* implicit */int) ((4294967287U) > (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) arr_2 [i_0])))))))))));
            var_20 = ((/* implicit */_Bool) ((unsigned short) 14623332427476801527ULL));
        }
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) var_14);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_2 - 2]))) ? (((((unsigned long long int) var_11)) - (((/* implicit */unsigned long long int) arr_6 [(unsigned char)12])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(signed char)11] [i_2])))))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            var_23 *= ((/* implicit */short) arr_0 [i_3]);
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */signed char) var_12);
                        var_25 = ((/* implicit */int) ((unsigned long long int) ((arr_1 [i_3 + 1] [i_0]) ? (((/* implicit */int) var_11)) : ((-2147483647 - 1)))));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) max((((8063170210356773308ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))))), (max((((/* implicit */unsigned long long int) arr_8 [1U] [i_3] [i_3])), (arr_4 [i_0]))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) var_1);
        }
    }
    for (int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) ((arr_14 [i_6 + 1]) << (((max((arr_14 [i_6]), (arr_14 [i_6 - 1]))) - (3184651216260355131LL)))));
        var_29 = ((/* implicit */_Bool) (+((-(((/* implicit */int) ((unsigned short) var_4)))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((3063405861U), ((+(var_10))))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
    {
        arr_18 [i_7] = ((/* implicit */_Bool) ((arr_15 [i_7 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7 + 1])))));
        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -26))));
        var_32 = ((signed char) var_17);
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4576238365823212966ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) 26ULL)))));
    }
    var_34 = ((/* implicit */signed char) ((var_2) % (((/* implicit */int) var_11))));
    var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
}
