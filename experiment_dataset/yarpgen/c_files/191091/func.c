/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191091
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)28824))))), (max((var_3), (var_3)))))) ? (var_7) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62421)) ? (7108065478614788534ULL) : (((/* implicit */unsigned long long int) -5878685029509293104LL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)28821), (((/* implicit */short) arr_0 [i_0 + 2]))))) ^ (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(var_2))))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                            {
                                arr_13 [i_1] [i_3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0] [i_3]) : (arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [(short)10] [i_0 - 2]))))) ? (((long long int) arr_11 [i_3] [i_3] [17LL])) : (((/* implicit */long long int) ((arr_1 [i_2 + 1]) ^ (max((arr_1 [i_0 + 2]), (arr_12 [i_0]))))))));
                                var_16 = ((/* implicit */long long int) (short)-28824);
                                arr_14 [i_3] [i_3] [i_3] [17U] [(unsigned short)12] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 3])) ? (arr_2 [i_0 - 2] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 + 2])))));
                                var_17 = ((/* implicit */short) min((((var_5) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (arr_9 [(signed char)18] [i_3]))), (((/* implicit */unsigned long long int) 765130547907918925LL))));
                            }
                            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                            {
                                arr_17 [i_0 - 2] [i_3] [i_2] [i_3] [(signed char)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_9) % (((/* implicit */long long int) arr_3 [i_1] [i_1])))), (arr_15 [(unsigned short)2] [i_0 + 2] [i_0 + 2] [i_2] [i_2 - 2] [i_3])))) ? (((((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) * (arr_3 [14U] [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_6) >= (var_6))))))));
                                var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) var_1))))))));
                                arr_18 [i_3] [i_1] [i_2] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned int) ((5878685029509293104LL) ^ (((/* implicit */long long int) (~(((unsigned int) 2320295917876016392LL)))))));
                            }
                            for (signed char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                            {
                                arr_21 [i_0 + 2] [i_3] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))), (max((((/* implicit */unsigned int) (short)28824)), (var_2)))))));
                                var_19 = ((/* implicit */unsigned int) -765130547907918939LL);
                            }
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_7 [i_0 + 2] [i_1])))))) : ((~(arr_7 [i_0 - 2] [i_1])))));
                        }
                    } 
                } 
                arr_22 [i_0 + 2] [i_0 + 2] = ((/* implicit */long long int) arr_20 [i_1] [i_1] [i_1] [(_Bool)1] [i_1]);
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_0 + 1])) > (((/* implicit */int) arr_16 [i_0 - 2]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1966483826U))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-28826))))), (max((var_7), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_10))))))));
}
