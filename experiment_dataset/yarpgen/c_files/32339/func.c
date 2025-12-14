/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32339
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)1)))))))) > (max((var_1), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-14412)), (var_6)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_17 = ((((/* implicit */int) (unsigned short)22146)) >> (((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-2)), (arr_3 [i_1]))))))) - (4802438012331552565LL))));
            arr_4 [2] [2] [i_0] = ((/* implicit */unsigned int) var_14);
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)8871)), (var_12))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (short)-5)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((arr_3 [(_Bool)1]), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) var_4))))) : (max((((/* implicit */long long int) (unsigned short)25645)), ((~(var_14)))))));
        }
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) (+(-1869373786393883395LL)));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_12))));
            var_20 += ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) var_7)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                var_22 &= ((/* implicit */signed char) ((unsigned long long int) var_0));
            }
            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                var_23 -= ((/* implicit */long long int) (unsigned char)255);
                var_24 = ((/* implicit */short) var_15);
            }
            arr_18 [10] = ((/* implicit */unsigned short) var_0);
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((var_12) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_16 [i_0] [(unsigned char)10] [i_0] [i_3])))) : (((/* implicit */int) arr_3 [i_0]))))))))));
        }
        var_26 = ((/* implicit */_Bool) var_9);
        arr_19 [i_0] = ((/* implicit */_Bool) var_15);
        var_27 = ((/* implicit */_Bool) -7900428077282891519LL);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_28 = max((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_7 [i_6]))))));
        arr_22 [i_6] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) var_10)) | (var_2))))), (var_3)));
    }
    var_29 ^= ((/* implicit */short) var_10);
    var_30 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)52524)), (var_10)));
}
