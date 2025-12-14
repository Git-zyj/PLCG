/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228071
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = (-(((/* implicit */int) max((((/* implicit */short) (signed char)0)), (arr_1 [i_1])))));
                    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1214237078)) ? (arr_7 [i_2 - 2] [1ULL] [i_0]) : (((/* implicit */int) (signed char)-66))))) ? (((((/* implicit */_Bool) arr_9 [13])) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [(_Bool)0])) : (-9063970468039131702LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2] [(unsigned short)4] [(_Bool)1]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6859796670124194422ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_7 [i_2 + 1] [14ULL] [i_2 + 1]) : (((/* implicit */int) ((((/* implicit */_Bool) -1451872028)) && (((/* implicit */_Bool) -7972773898936027327LL))))))))));
                    var_13 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [12LL] [i_1] [i_0])) || (((/* implicit */_Bool) (signed char)-63)))));
                    var_14 = ((/* implicit */unsigned int) ((long long int) (-(-6198161119341048612LL))));
                    arr_10 [i_2] = ((((/* implicit */_Bool) max((arr_4 [(_Bool)1] [i_1] [i_2]), (arr_4 [i_0] [(unsigned short)9] [(signed char)15])))) ? ((-(((((/* implicit */_Bool) -4371205039894101046LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (9274249177670620470ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-3351712768404489711LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67)))))) ? ((~(4199546436U))) : (arr_5 [i_0] [i_2 + 2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */_Bool) min((((int) (-9223372036854775807LL - 1LL))), (((((/* implicit */_Bool) var_7)) ? (((int) (_Bool)0)) : ((+(((/* implicit */int) var_4))))))));
}
