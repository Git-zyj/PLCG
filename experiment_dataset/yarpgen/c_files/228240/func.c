/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228240
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((var_3) << (((((/* implicit */int) var_14)) - (39))))))) ? ((-(min((((/* implicit */unsigned long long int) var_2)), (12903344420957212114ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((min((((arr_2 [i_0]) / (arr_2 [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3])) / (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))))));
        var_20 += ((/* implicit */_Bool) (unsigned short)18322);
    }
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        var_21 = max((((((((/* implicit */int) arr_4 [i_1 - 2])) * (((/* implicit */int) arr_6 [11LL])))) == ((+(((/* implicit */int) arr_4 [(unsigned short)3])))))), (arr_6 [i_1]));
        arr_7 [i_1] = ((/* implicit */long long int) arr_5 [i_1] [4ULL]);
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_8 [i_2 + 1] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) ((1829833514934894947LL) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))))))))) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) var_8))));
        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (arr_9 [i_2])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : ((-(-1829833514934894947LL)))))));
        var_24 = ((/* implicit */long long int) (((~(1419014671269550335ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_8 [i_2 + 4] [i_2])) : (((/* implicit */int) (unsigned short)0)))) == ((-(((/* implicit */int) arr_8 [(short)6] [i_2]))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] &= ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_8 [i_3] [(_Bool)1]))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_3]) / (arr_11 [i_3])))) ? (max((((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned short) arr_9 [i_3]))))), ((+(arr_11 [i_3]))))) : ((+(arr_11 [i_3]))))))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(signed char)3])) | (((/* implicit */int) arr_10 [2U] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [16ULL] [(_Bool)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [2LL])))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (-5469724878096226931LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (short)-9061)))))))))))));
        var_27 = ((/* implicit */unsigned short) arr_3 [i_3]);
        var_28 = ((/* implicit */long long int) ((12903344420957212114ULL) == (((/* implicit */unsigned long long int) 1098846102U))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [9LL] = ((/* implicit */_Bool) arr_11 [i_4]);
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_29 += ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5]))) : (-6206995152822273975LL))))));
            arr_20 [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_11 [i_5]))) ? (((((((/* implicit */_Bool) (unsigned short)47212)) && (arr_6 [i_4]))) ? (((/* implicit */int) (unsigned short)18322)) : (((/* implicit */int) var_13)))) : (((((/* implicit */int) arr_8 [i_4] [2LL])) * (((/* implicit */int) arr_4 [i_4]))))));
        }
        arr_21 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_15 [i_4] [i_4]))), (((((/* implicit */int) arr_16 [i_4])) * (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))))));
        var_30 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) ((signed char) 663814219993697711LL))))));
    }
}
