/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21248
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
    var_16 ^= ((/* implicit */long long int) var_13);
    var_17 = ((/* implicit */short) 17ULL);
    var_18 = ((/* implicit */_Bool) 19ULL);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                var_19 |= ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) (signed char)0))) > (((/* implicit */int) (unsigned short)58712)))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58712)) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) (signed char)0)))))));
                arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 8ULL);
                arr_10 [i_2] [i_0] [i_0] |= ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)235))))), (((((/* implicit */unsigned long long int) 420062950)) | (13493259725874787931ULL)))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((((-2150146807190732427LL) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 1858901074U)) ? (((/* implicit */int) (unsigned short)58011)) : (((/* implicit */int) (signed char)-1)))) - (58011))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (arr_4 [i_0]))))))));
            }
            var_21 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]);
            var_22 = ((((/* implicit */_Bool) 3527506509944493666ULL)) ? (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) min(((_Bool)0), ((_Bool)1))))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_1]))));
        }
        var_23 += ((unsigned int) ((((/* implicit */_Bool) 10587848945578145374ULL)) ? (((/* implicit */int) (short)-24622)) : (((/* implicit */int) arr_3 [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047))) & (((((arr_1 [i_3]) ? (((/* implicit */long long int) 1188885406U)) : (-1567330995557467644LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_11 [i_3])) % (((/* implicit */int) (unsigned short)58712))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    arr_22 [i_4] = ((/* implicit */unsigned int) (short)0);
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((min((arr_1 [i_4]), (arr_1 [i_6]))) ? (((((/* implicit */_Bool) 15225688946182446935ULL)) ? (1262561496) : (((/* implicit */int) (signed char)92)))) : (((/* implicit */int) (((-(1306349123U))) > (((unsigned int) (signed char)124))))))))));
                    var_26 = ((/* implicit */unsigned long long int) (~(((long long int) ((((/* implicit */_Bool) (unsigned short)42778)) || (((/* implicit */_Bool) 3983440562U)))))));
                    arr_23 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */signed char) -9223372036854775787LL);
                }
            } 
        } 
        var_27 ^= ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
        arr_24 [4] [i_4] &= ((long long int) 1740968465U);
    }
}
