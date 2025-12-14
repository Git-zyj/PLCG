/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40698
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
    var_12 = max((max((((/* implicit */short) (_Bool)1)), (((short) (unsigned short)61440)))), (((/* implicit */short) ((max((var_8), (((/* implicit */unsigned int) var_5)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) ((((/* implicit */int) (short)-27161)) == (((/* implicit */int) (unsigned char)40))))))) + (((/* implicit */int) (unsigned char)0))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (-(4294967286U)));
                var_14 = (unsigned short)27056;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((var_7) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) var_7))))) * ((-(((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21040))) + (((((/* implicit */_Bool) (short)-825)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29233))) : (8881597155864051431ULL)))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) (((-(((/* implicit */int) var_5)))) >= (((/* implicit */int) ((unsigned short) 4294967294U)))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_2 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_1))))) >= (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [(short)5]))))))))));
        var_18 = ((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12397))) : (arr_3 [(_Bool)1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)10628))))))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) * (((/* implicit */int) arr_1 [i_2]))));
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_20 = max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (unsigned char)116)))))))), (((arr_10 [i_3]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29241)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_9))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (4294967280U))))));
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))));
        var_22 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_11 [i_3])) / (((/* implicit */int) arr_10 [i_3])))));
    }
}
