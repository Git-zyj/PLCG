/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211548
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((_Bool) arr_4 [(short)0] [i_0])))))));
                arr_5 [i_1] &= ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)7)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) : (max((14502549292750428286ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3LL))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_9), (min((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 23; i_3 += 1) 
        {
            {
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */int) var_2)) - (var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_8)))))) : (((/* implicit */int) ((unsigned char) arr_8 [i_3 + 1] [i_3 + 1])))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~((-(var_3))))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned char)2])) && ((!(((/* implicit */_Bool) var_3))))))))))));
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) min((max(((-(-906686881))), (((/* implicit */int) min(((unsigned short)33899), (((/* implicit */unsigned short) var_8))))))), ((-(arr_11 [i_3])))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_9))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) (-((+(((/* implicit */int) arr_10 [22U]))))))))));
                }
                arr_14 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((-298313600), (((/* implicit */int) (_Bool)0)))) == (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_4)))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) 497763870)) ? (var_7) : (var_5))) : ((-(arr_11 [i_3])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) min((-906686897), (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (+(var_1)))) : (var_10)))));
}
