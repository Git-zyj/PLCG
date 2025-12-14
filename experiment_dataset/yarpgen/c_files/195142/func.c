/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195142
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) -1027766989027079597LL))))), ((~(((/* implicit */int) var_14)))))) : ((+((~(((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_3)))) ? (min((var_17), (((/* implicit */int) var_14)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), ((-(1027766989027079575LL)))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) max(((-(((/* implicit */int) var_5)))), (max((var_1), (((/* implicit */int) var_2))))))) : (max((((((/* implicit */_Bool) (unsigned short)25484)) ? (-1027766989027079623LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))))));
    var_22 = min((((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_12)))) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0] [i_0]))) ? ((+(((/* implicit */int) arr_5 [(signed char)9] [(signed char)9])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) 152440094U))), (max((((/* implicit */unsigned short) arr_1 [12LL] [i_0])), (arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) ((_Bool) arr_2 [i_0]))) : (((/* implicit */int) ((signed char) (_Bool)1)))))));
                arr_6 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_1] [(unsigned short)13])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_0]))))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
                var_24 = ((/* implicit */_Bool) (+(((min((arr_1 [i_0] [i_0]), (arr_1 [i_0 + 1] [i_0]))) ? (((/* implicit */int) max((arr_5 [i_0 + 1] [i_0 + 1]), (arr_5 [i_1] [i_0 - 1])))) : (((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1])))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */int) min((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0]))))), (((int) 1314563983160643311ULL)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0 - 1] [(_Bool)1])), (arr_5 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [(signed char)3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])))))))));
            }
        } 
    } 
}
