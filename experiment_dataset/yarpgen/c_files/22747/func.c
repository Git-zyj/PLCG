/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22747
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */short) arr_2 [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned short)22400))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    var_19 ^= ((/* implicit */short) ((long long int) (+(((/* implicit */int) var_15)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3] [i_4])) ? (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned char)0))));
                                var_21 = ((/* implicit */long long int) ((unsigned int) (unsigned short)51939));
                                arr_13 [i_0] [i_2] [i_4] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) var_11);
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)90)), ((short)32750))))))) ? (min(((~(((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [(unsigned char)19])) | (arr_5 [i_0] [i_0] [(_Bool)1])))))));
                                arr_15 [i_0] [8U] [i_0] [i_2] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)26822), (((/* implicit */short) (unsigned char)195))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (var_13))), (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3 - 2] [i_1])) ? (((/* implicit */unsigned long long int) var_11)) : (var_13))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32030))) | (2420701642U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))))))));
                            }
                        } 
                    } 
                    var_22 = ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2]))) ^ (4294967268U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-32030)))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_5 [i_2 + 1] [i_1] [(signed char)16]))) ? (arr_4 [i_0] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15))))));
                }
                for (int i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */short) ((((arr_7 [(unsigned short)8] [i_1] [i_0] [i_0] [i_5 + 1] [12U]) >> (((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (911307269253466650ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_1] [8ULL] [i_1] [i_0])))))));
                    arr_18 [i_1] [i_1] [12U] = ((/* implicit */unsigned char) (((-(min((((/* implicit */unsigned long long int) var_10)), (17862198085521957998ULL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2423207867U)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((unsigned int) arr_1 [i_5 - 1]))));
                                arr_25 [i_0] [i_1] [i_5] [i_6] [i_1] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-28269)))), (((((/* implicit */int) (unsigned char)84)) << (((var_13) - (17601066476620664161ULL)))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))) : (584545988187593591ULL)))))) : (((((unsigned int) 1317324061U)) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)165)), ((short)(-32767 - 1))))))))));
                                arr_26 [i_0] [i_7] [i_1] [i_5 - 1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(var_12)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((8312772938422019509ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65533))))));
                }
                arr_27 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_17 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-32042)) || (((/* implicit */_Bool) arr_17 [i_0])))))));
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)89)));
}
