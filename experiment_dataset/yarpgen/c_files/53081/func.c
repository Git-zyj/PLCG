/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53081
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 799356517U)) ? (((/* implicit */unsigned int) 2147483647)) : (2211156758U)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)19731)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) : (1455337467U)))), (max((((/* implicit */long long int) (short)-17916)), (-9103859076290439826LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */_Bool) (short)17936)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)2129)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7714)) ? (var_6) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 2767362885U)) ? (2839629812U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16359)))))))))));
                            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) -2147483647);
                            var_13 += ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned char)67)) ? (arr_5 [(unsigned short)6] [i_3] [i_2] [i_1]) : (((/* implicit */long long int) 2043052666U)))), (min((170328967518640981LL), (((/* implicit */long long int) (signed char)116)))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -2147483624)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) : (arr_7 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 465050238508422561ULL))))))));
                            var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (-7727976461152167552LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) -1532803562)) > (4294967289U))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_1 - 1])))) : (max((((/* implicit */long long int) 2147483647)), (arr_15 [i_1 - 2])))));
                            /* LoopSeq 3 */
                            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                            {
                                var_16 -= ((/* implicit */_Bool) min((((((unsigned long long int) 4408447894199362840LL)) * (((/* implicit */unsigned long long int) 536805376LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31)) ? (3974775830U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30887))))))));
                                arr_19 [i_5] [i_0] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (unsigned char)255)), (19ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10231)) + (131071))))));
                            }
                            /* vectorizable */
                            for (short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */signed char) ((unsigned int) (unsigned char)92));
                                var_18 ^= ((/* implicit */unsigned int) var_7);
                                arr_22 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_7] [i_5] [i_4] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_4] [i_5] [i_7]))));
                            }
                            for (short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                            {
                                arr_25 [i_4] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-7886)) / (((/* implicit */int) (unsigned short)15503))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)9991)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_8])) ? (((/* implicit */int) (unsigned short)43815)) : (var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1335291414)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1LL)))) && (arr_18 [i_4] [i_4] [i_4] [i_4]))))));
                                arr_26 [i_0] [i_1] [i_4] [i_5] |= ((/* implicit */unsigned int) 12384905303291998189ULL);
                            }
                            arr_27 [i_1] [i_1] [i_4] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5687)))))) + (max((((/* implicit */long long int) arr_9 [i_1] [i_1 + 2])), (arr_7 [i_1] [i_1 + 1]))));
                            var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((-216620658) / (((/* implicit */int) arr_11 [i_1] [(short)7] [i_5]))))), (max((4503599618981888LL), (((/* implicit */long long int) (unsigned short)21720)))))), (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21719))) & (4294950912U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
