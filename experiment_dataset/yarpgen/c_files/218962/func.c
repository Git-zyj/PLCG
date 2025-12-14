/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218962
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) (unsigned short)31334)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((unsigned char) (unsigned short)31554))) : (((((/* implicit */int) (unsigned char)175)) & (((/* implicit */int) (unsigned short)65532))))))));
                var_18 = ((/* implicit */long long int) (unsigned short)65535);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31334))) + (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31332))))))), (((((/* implicit */_Bool) max(((unsigned short)12027), (((/* implicit */unsigned short) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46903)) / (var_8)))) : (((2304235016U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))))))))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)30981)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22450)))))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((((+(((/* implicit */int) (unsigned char)226)))) | (((/* implicit */int) (unsigned short)56584)))) == (((/* implicit */int) (unsigned char)210)))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_4))));
}
