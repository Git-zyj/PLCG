/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249491
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
    var_17 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) % (min((var_8), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (var_2) : (var_10))) < (min((var_2), (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [9ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -884899045)) ? (11601456395903359191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56877)))))) ? (((((/* implicit */int) var_3)) - (var_9))) : (((((var_10) + (2147483647))) >> (((var_9) + (1226093894)))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8658))))), (((((/* implicit */unsigned long long int) var_10)) + (var_13)))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(var_2))), (((/* implicit */int) ((var_12) < (((/* implicit */int) var_16)))))))) ? ((((~(var_0))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56877)) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (var_10))) : ((+(((/* implicit */int) var_3)))))))));
        var_19 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (var_2)))));
        var_20 = ((/* implicit */int) min((var_20), (min((((((/* implicit */int) var_11)) - (((/* implicit */int) var_16)))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) << (((((((/* implicit */int) var_7)) * (var_2))) + (1282250639)))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) ((unsigned short) var_11));
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) + (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8660))) : (-1386807901507969940LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_12) : (var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0))) : (min((((/* implicit */unsigned long long int) var_9)), (var_13)))))));
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) 514192125));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) arr_9 [i_3 - 3])), (min((((/* implicit */unsigned long long int) var_3)), (var_8)))))));
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) * (((/* implicit */int) ((_Bool) arr_9 [i_2 - 2])))));
                        var_26 = (((((~(((/* implicit */int) var_16)))) + (2147483647))) << ((((((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8659))) + (1855248260690940073LL))))) + (1855248260690948743LL))) - (11LL))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_8))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)56875))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3] [i_3 + 1]))) ^ (((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))))));
                        arr_15 [i_1] [i_2 + 2] [i_3] [i_4] = ((((/* implicit */int) min((arr_1 [i_4]), (arr_1 [i_1])))) | ((~(((/* implicit */int) arr_1 [i_1])))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) var_0);
}
