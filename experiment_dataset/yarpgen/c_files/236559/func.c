/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236559
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = arr_0 [i_0];
        var_20 = ((/* implicit */unsigned int) ((int) (signed char)(-127 - 1)));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), ((signed char)114)))), (var_2)));
        var_22 |= ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (var_7)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-8937414178643303654LL) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1])))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1])) >= (2113929216))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (var_4)))), (arr_4 [i_1 - 1])))) : (((/* implicit */int) var_11))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)52896)) - (var_7)))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_14 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                var_25 -= ((/* implicit */unsigned int) var_9);
                var_26 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                arr_15 [i_4] [i_3] [i_4] = min((((/* implicit */unsigned short) (unsigned char)95)), (((unsigned short) arr_10 [i_3] [i_4] [i_3 - 1] [i_3 - 1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    arr_18 [i_2] [i_3 - 1] [i_4] [i_4] [i_5 + 2] = ((/* implicit */short) (!(var_16)));
                    var_27 = ((/* implicit */long long int) (-(var_2)));
                    arr_19 [i_5] [i_3 + 1] [i_3] [i_3 + 1] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_2] [i_3 - 1]) + (((/* implicit */long long int) var_7))))) ? ((+(-2527481267450161991LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)53526)))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_16 [i_3] [i_3 - 1] [1U] [i_3] [i_3] [i_4])) : (((/* implicit */int) arr_16 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_4]))));
                }
            }
        }
        arr_20 [8LL] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned short) arr_11 [i_2] [(unsigned char)6] [i_2]))) & (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [(signed char)4]))))) ? (((/* implicit */int) max((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [14U]), (var_12)))) : (((/* implicit */int) (signed char)-123))))) ? ((~(((/* implicit */int) var_18)))) : (((/* implicit */int) var_3))));
        var_29 = ((/* implicit */signed char) max((var_29), (var_15)));
        arr_22 [i_2] = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_10 [i_2] [(unsigned char)12] [i_2] [(unsigned char)12]))), (((((/* implicit */int) arr_10 [i_2] [8ULL] [i_2] [i_2])) - (((/* implicit */int) arr_10 [i_2] [6LL] [6LL] [i_2]))))));
    }
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12640)) ? (-2235183484706310555LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148)))));
    var_31 = ((/* implicit */unsigned long long int) var_17);
    var_32 = ((/* implicit */short) var_4);
}
