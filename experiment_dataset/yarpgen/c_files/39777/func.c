/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39777
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
    var_11 *= ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_8 [i_0] [7U] = ((/* implicit */_Bool) (unsigned char)228);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1])) ? (((/* implicit */int) (short)8353)) : (((/* implicit */int) arr_0 [i_4 - 1])))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_12 [i_1]);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) max((var_13), ((short)8330)));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */unsigned long long int) 2376334968739280910LL)) : (288230376151709696ULL))) : (((/* implicit */unsigned long long int) 3478425842U)))), (((/* implicit */unsigned long long int) arr_4 [i_0] [(short)9]))));
                    arr_21 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) arr_15 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (max((var_4), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1087))) : (1261053511980382368LL))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)175)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_6)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8331)))))))) ? (((/* implicit */int) (unsigned char)129)) : (max((((/* implicit */int) ((((/* implicit */int) (short)248)) < (((/* implicit */int) (unsigned char)27))))), (((((/* implicit */int) arr_15 [i_0] [i_1 + 2])) + (((/* implicit */int) (unsigned char)61))))))));
                }
                for (unsigned char i_6 = 3; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    var_15 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_4 [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */int) max((((/* implicit */short) arr_12 [i_1])), (arr_14 [(_Bool)1] [i_0] [(_Bool)1] [i_1] [i_6])))) : (((((/* implicit */_Bool) (short)8331)) ? (((/* implicit */int) (unsigned short)51446)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                    arr_24 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_22 [i_0] [i_1 + 1] [i_0])), ((-(((/* implicit */int) ((((/* implicit */int) (short)-5040)) != (((/* implicit */int) arr_19 [i_0] [i_0])))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1] [(short)0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)8] [i_1] [i_1])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) (unsigned short)5266)) : (((/* implicit */int) ((_Bool) (short)8349))))) : ((+(((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10471)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7622029097685862674ULL))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)103))))))) ^ (min((10824714976023688941ULL), (((unsigned long long int) arr_23 [i_0]))))));
                }
                arr_26 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_18 [i_0] [i_1 - 1]), (((/* implicit */unsigned int) (short)32767))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))) : (arr_1 [i_0])))) ? (((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) var_8)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6898))))))) : (((4824643166366766203ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4503462188417024LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8354))) : (2376334968739280910LL))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23893)) | (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (var_2)))) <= (var_4)));
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned char)27), (var_8)))) && (((/* implicit */_Bool) ((4503462188417024LL) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_6))))))) : ((-(8192ULL)))));
    var_20 = ((/* implicit */unsigned short) ((unsigned char) (+(var_7))));
}
