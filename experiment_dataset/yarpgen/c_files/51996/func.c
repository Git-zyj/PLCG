/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51996
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((8472395564836088848ULL) >= (9974348508873462781ULL)))), (((((/* implicit */_Bool) (unsigned short)15276)) ? (((/* implicit */int) (unsigned short)15270)) : (((/* implicit */int) (short)27339))))))) : (min((8472395564836088862ULL), (3538409698742496441ULL)))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_3 [i_1 + 1] [i_1 - 1] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 4] [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 1] [i_0]))))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_17 = ((((/* implicit */long long int) ((-1553125386) ^ (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1]))))) > (((max((((/* implicit */long long int) (unsigned short)65533)), (-951597564057508561LL))) << (((min((arr_10 [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned short)24576)))) - (24530U))))));
                            var_18 *= ((/* implicit */signed char) var_15);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (1048575)))) ? (((/* implicit */int) (unsigned short)15276)) : (((/* implicit */int) (unsigned char)64))));
                            arr_14 [i_3] = (unsigned short)14;
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-17569)) + (((/* implicit */int) (unsigned char)251)))))));
            var_21 = ((/* implicit */unsigned int) (signed char)127);
        }
        for (signed char i_5 = 4; i_5 < 12; i_5 += 3) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)-6)))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-14)))))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((8472395564836088870ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_5 - 4] [i_5])) - (((/* implicit */int) (unsigned char)71)))))))) ? (max((4294967292U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)0))))))) : ((((~(14U))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_7)))))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((signed char) (((((_Bool)1) && (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (18446744073709551606ULL))))))))));
            var_25 *= ((/* implicit */unsigned char) (_Bool)1);
            var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (max((max((0LL), (((/* implicit */long long int) (unsigned char)36)))), (((/* implicit */long long int) var_1))))));
            arr_21 [i_0] [i_6 + 1] = ((/* implicit */unsigned long long int) ((2968806483U) != (((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        var_27 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) min((arr_2 [i_0]), (arr_6 [i_0] [i_0] [i_0])))))));
    }
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
    var_29 = ((/* implicit */long long int) (+(max((((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) var_0))))));
}
