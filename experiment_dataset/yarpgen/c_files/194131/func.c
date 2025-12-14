/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194131
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) 16810129008656990806ULL);
        var_11 = ((/* implicit */unsigned short) max((((signed char) (unsigned short)49143)), (var_9)));
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (1636615065052560826ULL)))) ? (((9586000972030620638ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((int) 1636615065052560812ULL)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                arr_11 [3] [i_1 + 2] = ((/* implicit */int) ((unsigned long long int) ((unsigned int) (unsigned short)57820)));
                arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))) << (((/* implicit */int) var_4))));
                var_13 -= ((/* implicit */long long int) arr_6 [i_1] [i_2] [i_3]);
                var_14 = ((/* implicit */int) ((1636615065052560798ULL) + (((/* implicit */unsigned long long int) -4557981995019019158LL))));
                var_15 = ((/* implicit */unsigned short) (short)16384);
            }
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_18 [i_1 + 1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */long long int) var_0);
                    arr_19 [i_1 - 1] [i_1] [i_1] [16] [i_1 + 2] [(short)15] = ((/* implicit */short) 1471522004);
                }
                for (short i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) 16810129008656990794ULL))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_4 [i_1] [i_6]))));
                }
                var_18 = ((/* implicit */_Bool) (short)-16383);
                var_19 -= (~((+(((/* implicit */int) (_Bool)1)))));
            }
            var_20 = ((/* implicit */unsigned long long int) (signed char)52);
            arr_22 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_16 [i_1 + 1] [i_2] [i_2] [i_2] [(unsigned char)1]))));
            arr_23 [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4076461719771342569LL)) ? (var_7) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-110)) && (((/* implicit */_Bool) (signed char)63)))))));
            var_21 = ((/* implicit */int) var_1);
        }
        /* LoopSeq 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((3910608129084710769ULL) == (((/* implicit */unsigned long long int) 2954107624U))))))), (max((((/* implicit */unsigned long long int) ((signed char) (signed char)69))), (arr_4 [13LL] [i_7 - 1])))));
            var_23 = max((((/* implicit */int) ((((((/* implicit */unsigned long long int) 3029639191U)) / (17201612623153203618ULL))) > (((/* implicit */unsigned long long int) ((134217727) / (((/* implicit */int) (short)-25680)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)6)) - (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_10 [i_1] [i_7] [i_1] [i_1])) / (((/* implicit */int) var_8)))) : (2147483647))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_5), (((((/* implicit */_Bool) max((-1722585305), (2147483647)))) ? (((/* implicit */int) (short)32766)) : (max((-508439155), (753730585)))))));
            var_25 = ((/* implicit */short) max((((/* implicit */int) arr_27 [i_8] [(unsigned short)9] [i_1])), (max((753730607), (((((/* implicit */_Bool) arr_10 [i_8] [i_8] [4] [i_1])) ? (((/* implicit */int) (short)-32767)) : (arr_17 [i_8] [(unsigned char)14] [i_1] [i_1])))))));
            var_26 = ((/* implicit */unsigned short) ((134217733) * (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_14 [i_8] [i_8] [i_1 - 1] [i_8])))) > (max((-134217715), (((/* implicit */int) (unsigned short)23050)))))))));
            var_27 = ((/* implicit */int) ((arr_28 [i_1] [i_8] [8ULL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_25 [i_1] [(unsigned char)2])) >= (arr_5 [i_1] [i_8])))) <= (((/* implicit */int) (unsigned short)42471))))))));
        }
    }
    var_28 += ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
}
