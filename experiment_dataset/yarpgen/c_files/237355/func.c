/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237355
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
    var_10 += ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_10 [i_2] [2ULL] = ((/* implicit */short) (_Bool)1);
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (((!((_Bool)1))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_5 [i_0] [i_0])))))) : (arr_8 [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
            var_12 += ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (min((((/* implicit */int) ((_Bool) arr_2 [i_0]))), ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))))));
            var_13 = ((/* implicit */short) (unsigned char)117);
        }
        var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_2)) & (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2052117759)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned short)65535))));
    }
    for (int i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) arr_4 [i_4 + 1] [(unsigned short)4] [i_4] [i_4]);
        var_17 = ((/* implicit */short) (unsigned short)45421);
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_5 [i_4 + 1] [i_4]), (arr_5 [i_4 + 1] [22LL])))) <= ((~(((/* implicit */int) var_4))))));
        var_19 = var_1;
    }
    for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 2) 
    {
        var_20 += ((/* implicit */signed char) ((unsigned char) arr_14 [i_5]));
        var_21 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (arr_13 [i_5 + 1] [i_5 - 2]))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) -1364612712)) ? (((/* implicit */int) var_7)) : (129201987))))))));
    }
    var_22 = ((/* implicit */unsigned int) ((min((max((((/* implicit */int) var_0)), (-79653697))), (var_5))) >= ((+(((/* implicit */int) var_6))))));
}
