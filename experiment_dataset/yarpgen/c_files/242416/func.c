/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242416
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */long long int) (unsigned char)179);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [16U] [i_1] [i_2] [i_1] [i_4] = max((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_13))))))), (((/* implicit */unsigned long long int) max((674027883879604949LL), (-5358964663845964604LL)))));
                                arr_17 [i_0] [i_1] [i_4] [i_3] |= ((/* implicit */_Bool) max((((min((((/* implicit */unsigned long long int) var_18)), (8795556151296ULL))) >> (((/* implicit */int) max(((unsigned char)2), ((unsigned char)60)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) || ((_Bool)1)))), (min((((/* implicit */long long int) var_18)), (0LL))))))));
                                arr_18 [i_0] [i_0] [i_4] [i_4] [i_3] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2LL)) ? (782419087868450236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)18992), (((/* implicit */short) (signed char)123))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (signed char)-116))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned char i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_24 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */short) ((long long int) ((((var_4) + (2147483647))) >> (((/* implicit */int) var_1)))));
                            /* LoopSeq 4 */
                            for (short i_7 = 3; i_7 < 18; i_7 += 4) /* same iter space */
                            {
                                var_22 |= ((/* implicit */signed char) ((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (6441988916974341276LL))));
                                arr_28 [i_1] [i_1] [i_1] [i_6 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)0)))), (min((var_11), (((/* implicit */unsigned char) var_18))))))) ? (((1054322667594834938LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) : (((/* implicit */long long int) ((-1778402827) - (((/* implicit */int) (short)-10926)))))));
                                var_23 = ((/* implicit */signed char) max((((/* implicit */int) var_16)), (((((/* implicit */int) (short)18992)) / (((/* implicit */int) var_18))))));
                                arr_29 [i_1] [i_6 + 4] [(unsigned char)21] [i_1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (13215174372603885532ULL) : (18225582824067904066ULL)));
                            }
                            for (short i_8 = 3; i_8 < 18; i_8 += 4) /* same iter space */
                            {
                                arr_32 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), ((short)18992)))) ? (((((/* implicit */_Bool) 5705026479048894838ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) (short)-18993)))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (_Bool)1)), (-586605395))) < (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_8)))))))))));
                                var_25 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)22587)) : (((/* implicit */int) (short)19006))))));
                            }
                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 21; i_9 += 2) 
                            {
                                arr_36 [(short)9] [i_1] [i_5] [i_1] [i_9] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8091799402112236497LL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-32))));
                                arr_37 [i_0 - 4] [i_1] [i_5] [i_6] [i_9] [i_6] = ((/* implicit */int) ((short) var_14));
                            }
                            for (unsigned short i_10 = 3; i_10 < 21; i_10 += 1) 
                            {
                                arr_40 [i_1] [i_1] [i_5] [(_Bool)0] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (short)32757)), (71916856549572608ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 310980682)) ? (1996392036) : (1673771874))))));
                                var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((((/* implicit */int) ((((/* implicit */_Bool) (short)32753)) && (((/* implicit */_Bool) 730634587U))))) >> (((((/* implicit */int) max((((/* implicit */short) (signed char)123)), ((short)-32761)))) - (98)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)65)) << (((var_3) - (3967694654929675050LL)))));
}
