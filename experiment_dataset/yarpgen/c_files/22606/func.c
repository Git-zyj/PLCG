/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22606
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
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + ((-(15485675484745357987ULL)))))));
        var_16 += ((/* implicit */unsigned long long int) (+(209454824U)));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_17 *= ((/* implicit */signed char) 4085512459U);
            var_18 = ((/* implicit */_Bool) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (209454868U)))))));
            var_19 *= var_7;
            var_20 = ((/* implicit */signed char) max((8019766375058011676ULL), (((/* implicit */unsigned long long int) max((((long long int) var_4)), (((/* implicit */long long int) ((4085512459U) << (((((/* implicit */int) arr_0 [i_0])) - (25165)))))))))));
        }
        var_21 = (+(((/* implicit */int) (short)21423)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */short) (+(((/* implicit */int) ((209454816U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_2] [i_2 - 2] [(unsigned short)9])))))));
        }
        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 3; i_5 < 9; i_5 += 3) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (209454823U)));
                var_25 = ((/* implicit */long long int) var_5);
            }
            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)));
            arr_14 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [5U] [i_4] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_4]))))));
        }
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2])))))));
    }
    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4085512468U)))) ? (((/* implicit */int) var_12)) : (2038710154)))) ? ((+((+(((/* implicit */int) var_5)))))) : (((int) var_11))));
    var_29 = ((/* implicit */signed char) (((+(4085512479U))) + (((/* implicit */unsigned int) (((~(-2038710153))) & (((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))));
}
