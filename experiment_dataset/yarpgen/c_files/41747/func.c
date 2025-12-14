/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41747
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(14609224623517448112ULL))) + (var_4)))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)1)))))) : (max((((/* implicit */int) max((var_9), ((signed char)39)))), (max((((/* implicit */int) (unsigned char)198)), (var_5))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [19LL] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))));
                    var_13 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)123))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((var_11) + (var_4))) : (((/* implicit */unsigned long long int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_15 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) | (min((((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_4 + 2] [i_6])), (var_11))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_4] [i_4]) ? (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) var_2))))) ? ((~(var_5))) : ((-(min((var_8), (((/* implicit */int) arr_13 [i_3] [i_4] [9ULL]))))))));
                            arr_22 [i_4 - 1] [i_4 - 1] [i_3] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)12555)), (arr_20 [i_4] [i_4])))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_3] [i_3] [(signed char)0]))))), (min((((/* implicit */unsigned int) arr_16 [(unsigned char)10] [i_4])), (var_6))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                arr_31 [i_3 - 1] [i_4 + 1] [(_Bool)1] [i_8] [i_8] = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_1)) ? (var_8) : (var_5)))))));
                                arr_32 [i_9] [i_3] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) min((var_0), (var_0))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_9] [i_7] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_21 [i_3])) : (((/* implicit */int) var_3)))) == (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) arr_25 [i_4] [i_7] [(_Bool)1] [i_7]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((min((((unsigned long long int) arr_7 [i_3] [i_3] [12U] [i_3])), (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) (+(((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                    var_19 ^= ((((/* implicit */_Bool) min((-5375894557003973074LL), (((/* implicit */long long int) (signed char)123))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_2) ? ((-(arr_3 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), ((signed char)-123))))))));
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) var_4);
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((var_8), (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])))) < (((((/* implicit */int) (unsigned char)254)) + (((/* implicit */int) (unsigned short)38907)))))))));
                }
            }
        } 
    } 
}
