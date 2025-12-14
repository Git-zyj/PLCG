/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27396
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((max((((/* implicit */long long int) 4294967287U)), (((arr_0 [(unsigned char)5] [i_1]) & (((/* implicit */long long int) arr_1 [i_1])))))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [11LL] [i_1]) <= (max((((/* implicit */long long int) (unsigned short)54765)), (7623074781347310864LL)))))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((4294967287U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))))), (min((arr_0 [6U] [i_1]), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) 8U))), ((~(8U))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (short)31737);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((max((arr_14 [i_4] [i_4 + 1] [i_4 + 1]), (arr_14 [i_4] [i_4 - 1] [i_4 + 1]))), (max((arr_14 [16ULL] [i_4 - 1] [i_4 - 1]), (arr_14 [i_4] [i_4 + 1] [i_4 - 1])))));
                arr_17 [i_4] = ((/* implicit */signed char) arr_12 [i_3] [i_4]);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_20 [i_4] [i_4] [i_4 + 1] [(unsigned short)14] = ((/* implicit */short) (~(((/* implicit */int) max(((unsigned char)163), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_4])) && (((/* implicit */_Bool) (short)-31737))))))))));
                    var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (min((arr_16 [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_11 [19ULL] [i_5])))))));
                    var_16 += ((/* implicit */int) ((signed char) 1152921435887370240ULL));
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_17 = ((/* implicit */short) min((2699942491U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 105553116266496LL)) <= (2425812067370359990ULL)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 3; i_7 < 19; i_7 += 4) 
                    {
                        arr_25 [i_3] [i_4 + 1] [i_4] [i_6] [i_6] [i_4] = ((/* implicit */unsigned int) arr_11 [i_6] [i_6]);
                        arr_26 [i_4] [i_4] [i_6] [6LL] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_3] [i_4] [i_4] [i_7])) - (min((((/* implicit */int) (_Bool)1)), (2018140341)))));
                    }
                    var_18 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned short)13857)))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)2119)) - (((/* implicit */int) (short)27166))))))) || (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) == (1379623610U)))));
}
