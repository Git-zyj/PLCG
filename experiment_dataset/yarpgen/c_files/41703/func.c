/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41703
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2633505959U)) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)119))))) : (((/* implicit */int) arr_0 [i_0])))))))));
            var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))), ((-(var_10))))))));
            var_18 |= ((/* implicit */_Bool) (unsigned short)59211);
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) && (((((/* implicit */_Bool) (unsigned char)118)) || (arr_5 [i_0] [i_1])))));
            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)35417)) ? (1233572020) : (((/* implicit */int) arr_1 [i_1 - 3] [i_1 + 1])))) - ((~(((/* implicit */int) (unsigned short)35390))))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_20 += ((/* implicit */unsigned char) (signed char)108);
            var_21 = ((/* implicit */unsigned char) (~((~(18387780067643452425ULL)))));
        }
    }
    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 1] [i_3] [i_3]))) : (8223684835509402804LL)))) ? (((/* implicit */int) arr_1 [i_3 + 2] [i_3])) : (((/* implicit */int) var_8)))) >> ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42))))))))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) ((signed char) max((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_6])))), (((/* implicit */int) (unsigned char)244)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)35417)) + (((((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])) - (((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)30697)) || (((/* implicit */_Bool) (signed char)113)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */int) arr_2 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) arr_10 [i_3] [i_3])))) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((max((((2351562519U) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)244))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_13)))))))))))));
}
