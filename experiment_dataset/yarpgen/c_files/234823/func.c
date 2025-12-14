/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234823
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
    var_15 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (14254992218503217183ULL)))));
    var_16 &= ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_5);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)76)) ^ (((((/* implicit */_Bool) (unsigned char)76)) ? (-21994704) : (((/* implicit */int) (signed char)4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_17 = ((/* implicit */unsigned char) ((unsigned int) var_11));
                                var_18 = ((/* implicit */int) (signed char)90);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) (+(arr_0 [i_2])));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (var_12)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))) / (((/* implicit */int) min((arr_13 [i_1]), (arr_13 [i_1]))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(arr_7 [i_2] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((unsigned long long int) (~(var_10))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)6)), (15345057763663311057ULL)))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (1936414200U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)35596)) > (((((/* implicit */int) (signed char)-116)) - (((/* implicit */int) (_Bool)1)))))))))))));
        arr_21 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) min((-182929653), (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (unsigned char)95)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (arr_9 [i_0])))))) : ((-(arr_1 [i_0])))));
        var_23 = ((/* implicit */long long int) var_5);
    }
    var_24 += ((/* implicit */int) ((((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_12)))))) - (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_11)) : (var_2))) + (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
}
