/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208221
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) max((((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_9)))) ? (max((-1), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_3), (var_7)))))), (((var_9) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9)))))))));
    var_11 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((short) 3970435480U))))) || (((/* implicit */_Bool) ((unsigned int) ((short) var_6))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [5] = ((/* implicit */short) min((((/* implicit */signed char) var_5)), (max(((signed char)82), (((/* implicit */signed char) var_5))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_3);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_12 &= (((!(var_5))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_1), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_5)))))));
                        arr_10 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_9)))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_4] [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) var_6);
                            var_13 += ((/* implicit */short) max((((/* implicit */int) ((arr_11 [i_1 + 4] [i_3 + 3] [i_3 + 3] [i_4 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), ((-(((/* implicit */int) var_0))))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) (~(324531815U))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (((long long int) var_1))))) : (max((var_8), (((/* implicit */unsigned long long int) max((var_2), (var_1)))))))))));
                            arr_14 [i_4] [i_1] [(_Bool)1] [i_1] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max(((_Bool)1), ((_Bool)1))))) || (((/* implicit */_Bool) arr_6 [i_3] [(unsigned short)7]))));
                            arr_15 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) : ((-(3970435484U)))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) ((840877839U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [0LL])))))))))));
                            arr_20 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                            arr_21 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [0ULL] [i_3 + 3] = ((/* implicit */short) var_1);
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [(unsigned short)10] [(_Bool)1]);
                            arr_24 [i_0] [i_1] [2] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) max(((+((-(arr_12 [i_0]))))), (((/* implicit */unsigned long long int) var_2))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (short)-391))))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 324531819U)), (arr_12 [i_0]))))));
                            var_20 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) ((unsigned char) -448273262))))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                        }
                        var_22 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_3] [7U] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) <= (((((/* implicit */_Bool) 2122901544U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3]))) : (2172065759U))))));
                    }
                } 
            } 
        } 
    }
}
