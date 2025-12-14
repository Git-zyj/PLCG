/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214481
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
    var_12 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (151)))))), (var_3)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) var_8))))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11))))) <= ((~(((/* implicit */int) var_7)))))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) == (min((var_1), (((/* implicit */unsigned int) var_5)))))))) | (max(((+(-8798832795857020750LL))), ((~(var_4)))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) + (var_6))))))) >> (((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) * (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_8) / (((/* implicit */int) var_9)))) / ((-(var_6)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_10))))) - (((/* implicit */int) var_10)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13387))))) ? (max((((var_6) / (((/* implicit */int) var_11)))), (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) : (var_8)));
        arr_8 [i_1] [i_1 - 2] = min((((((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) (!(var_7)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_11)))))) > (var_3))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) var_6)) + ((-(var_1))))))))));
                    var_18 |= ((/* implicit */long long int) var_10);
                    arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(var_3)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */int) var_10))))) * (((var_3) / (((/* implicit */unsigned long long int) var_1)))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) <= (((/* implicit */int) var_11))))))))), (((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_7)) : (var_8)))) : (var_4)))));
    }
    var_20 = ((/* implicit */unsigned char) ((-2287510933445403809LL) / (-1706172953343200402LL)));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_0))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / (var_4))))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (short)-13387))) / (-4709570751955952781LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((var_8) <= (((/* implicit */int) var_9)))))))))));
}
