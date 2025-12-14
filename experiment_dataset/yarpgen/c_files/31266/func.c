/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31266
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max((((((((/* implicit */int) (unsigned char)96)) * (((/* implicit */int) (unsigned char)96)))) - ((-(arr_0 [(_Bool)1] [i_0]))))), (((/* implicit */int) min((((/* implicit */short) var_8)), (min(((short)-32741), (((/* implicit */short) (unsigned char)159))))))))))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) && (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (var_0)))))) / (((((/* implicit */int) ((arr_2 [i_0]) == (var_7)))) - (var_1)))));
        var_12 = ((/* implicit */long long int) (+(max((((/* implicit */int) arr_1 [i_0])), (max((((/* implicit */int) (unsigned char)161)), (1884503308)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)-12)) % (((((((/* implicit */int) (unsigned short)65523)) - (((/* implicit */int) (unsigned char)94)))) & (((/* implicit */int) arr_1 [0ULL]))))));
        var_14 = ((/* implicit */short) max(((+(var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((1884503296), (((/* implicit */int) (unsigned short)63779))))))))));
    }
    for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_6))) ? ((-(arr_10 [i_2 - 2] [i_2 + 2]))) : (min((arr_10 [i_2 - 3] [i_2 - 3]), (arr_10 [i_2 - 2] [i_2])))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)18623)) + (-1884503290)));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_22 [i_2 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [i_5])) : (((/* implicit */int) var_0)))))))));
                        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18623))) : (0LL))), (((/* implicit */long long int) ((var_8) ? (var_3) : (((/* implicit */int) var_0)))))))), (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (-2LL)))) ^ (((((/* implicit */_Bool) (signed char)125)) ? (var_4) : (((/* implicit */unsigned long long int) var_1))))))));
                        arr_23 [i_3] [i_4] [i_5] = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) (~(27ULL)));
        var_18 ^= ((/* implicit */_Bool) 9740957565707013470ULL);
    }
    var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((3816100628470730957ULL), (((/* implicit */unsigned long long int) (unsigned char)150)))))))));
}
