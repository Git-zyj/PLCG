/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244216
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
    var_17 = var_7;
    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2025947562)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0))))) || ((!(((/* implicit */_Bool) var_12))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) var_13);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-72)), (min(((short)0), (((/* implicit */short) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((long long int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (var_11) : (((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */int) var_13))))));
                var_22 = ((/* implicit */unsigned char) var_4);
                arr_8 [i_2] [(signed char)14] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_23 |= ((/* implicit */int) ((signed char) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]));
                    arr_13 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */long long int) -2025947563);
                    var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)254))) ? (var_8) : ((-(-1892814661)))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2])) ? (-1894106254) : (((/* implicit */int) var_13))));
                }
                for (short i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    arr_17 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_13))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) arr_12 [i_4 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]))));
                }
            }
            var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) % (max((402653184), (((/* implicit */int) (short)(-32767 - 1)))))))), (-7482893479976434678LL)));
        }
        for (short i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            var_28 = max((((/* implicit */unsigned int) 1892814660)), (2697082932U));
            arr_21 [i_0] [i_5 + 1] |= ((/* implicit */unsigned int) ((arr_15 [i_0] [i_5] [i_0] [i_5]) ? (-2025947563) : (((/* implicit */int) (unsigned char)15))));
        }
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2025947562)) + (arr_9 [i_0] [(signed char)4]))))));
        var_30 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)248)), ((-(-3041510736532231196LL)))));
    }
}
