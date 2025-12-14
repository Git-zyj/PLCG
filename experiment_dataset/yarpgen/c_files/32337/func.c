/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32337
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
    var_18 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)182)) : (-1158554035)));
    var_19 = ((/* implicit */unsigned char) max((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) < (var_1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((1015156244) <= (((/* implicit */int) (unsigned char)69))))))), (var_14)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_5 [i_1]))));
        var_21 = ((/* implicit */unsigned char) 3173163742U);
        var_22 = (_Bool)1;
        var_23 += max((max((arr_4 [i_1]), (((/* implicit */unsigned int) max(((signed char)-85), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */unsigned int) 2147483647)));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_24 = ((/* implicit */_Bool) (unsigned char)196);
            arr_10 [i_2] [i_1] [i_1] = ((((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)196)))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_2])))) : (((/* implicit */int) arr_6 [i_2] [i_1])));
            arr_11 [i_1] = ((/* implicit */int) arr_4 [i_1]);
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_25 = ((/* implicit */int) ((unsigned short) var_9));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) -1766144624))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)75)))))))))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_13 [i_1] [(unsigned short)0]))));
            var_28 = ((/* implicit */int) ((_Bool) 1193542502));
            var_29 = ((/* implicit */short) var_1);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) arr_12 [i_1] [i_1]);
            var_31 = ((/* implicit */int) (_Bool)1);
            arr_18 [i_4] [i_4] = ((/* implicit */long long int) (+(((unsigned int) (unsigned short)8))));
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) -4124065739755455403LL))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)1), (arr_6 [i_1] [i_1]))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1193542502))))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_5])))))));
        var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [(unsigned short)24])))))))));
    }
}
