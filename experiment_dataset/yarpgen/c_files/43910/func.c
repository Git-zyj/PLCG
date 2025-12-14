/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43910
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
    var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_18))))) ? (var_19) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_14)) : (var_7))), (((/* implicit */long long int) min((var_10), (var_10)))))), (((/* implicit */long long int) var_18))));
        var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_2)) : (var_19))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10)))))))));
        arr_4 [10ULL] [10ULL] &= ((/* implicit */int) ((((/* implicit */int) (signed char)-56)) == (((/* implicit */int) (unsigned char)1))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) <= (14783889573211575312ULL)))))))));
            var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned short) var_16)))))))) < ((~((-(((/* implicit */int) var_9)))))));
            var_25 = ((/* implicit */_Bool) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (16678885816712522058ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (min((var_14), (var_1))) : (((/* implicit */int) ((short) var_10))))))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (!(((((unsigned long long int) var_5)) >= (((((/* implicit */_Bool) var_7)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_2) + (((/* implicit */long long int) var_13)))), ((+(var_6)))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_5))));
            var_27 = ((/* implicit */int) var_13);
            var_28 = ((long long int) min((var_1), ((+(((/* implicit */int) var_3))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) var_14);
        arr_14 [i_3] = ((/* implicit */unsigned char) ((var_19) - (((/* implicit */unsigned long long int) ((var_12) - (var_12))))));
    }
    for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        arr_17 [i_4 + 1] = ((/* implicit */signed char) (((!(((((/* implicit */unsigned long long int) var_12)) >= (var_19))))) ? (((/* implicit */long long int) var_13)) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_6))), (((/* implicit */long long int) var_4))))));
        arr_18 [i_4] = ((/* implicit */signed char) ((long long int) (unsigned char)1));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (var_12)))))))) : ((+(-3200417562739988222LL)))));
    }
}
