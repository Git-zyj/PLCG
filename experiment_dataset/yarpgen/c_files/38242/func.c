/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38242
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1893719922U)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_0 [i_1 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [8ULL] [i_1 + 3] [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_1]))))) < ((~(arr_1 [i_0 - 1]))));
                var_12 = ((/* implicit */_Bool) (unsigned short)0);
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (136365211648LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2]))))) : (8128ULL))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned short)25830)) : (((/* implicit */int) (unsigned short)12)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1])), (arr_4 [i_0]))))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_1])), (var_10)))) ^ (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_3] [i_1])))))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-((-(var_1))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] = ((/* implicit */short) ((arr_10 [i_2] [i_2] [i_2] [0U]) ^ (max((min((arr_7 [i_0] [i_1 + 3]), (((/* implicit */unsigned int) (unsigned short)30078)))), (((/* implicit */unsigned int) (+(arr_3 [i_0] [i_1]))))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2432774354U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]))))))) ? (((/* implicit */long long int) (-((-(327436760)))))) : (((((/* implicit */_Bool) arr_6 [i_2] [9ULL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2401247356U)))))) : ((~(-2223579793204359529LL))))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) ((short) (-(((((/* implicit */_Bool) arr_13 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) (signed char)118)))))));
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) (short)30491)), (136365211630LL)));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [(unsigned char)12] [i_5] [i_1 - 1] [(unsigned char)12])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))))));
                    var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (~(var_10)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (arr_8 [i_0] [i_1 - 1] [i_1] [i_1])));
                    var_22 = ((/* implicit */unsigned short) (signed char)27);
                }
                for (int i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 2432774362U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0] [i_0])))))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_1 [16LL])))))));
                    var_24 = ((/* implicit */short) ((_Bool) (_Bool)0));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1893719922U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */long long int) -1952002674)) : (var_0))) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)26))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 3226831942U)) && (((/* implicit */_Bool) var_9))))))))));
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (short)32759))))) > (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)66))))))) ? (max(((-(var_0))), (min((((/* implicit */long long int) 0U)), (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))));
}
