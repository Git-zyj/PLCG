/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192329
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_13 -= ((((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_11)))) >= (((/* implicit */int) ((unsigned short) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 6551424534957078341ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)17753))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_8))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)4)) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */short) max((((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_0 [i_1])))), ((-((+(((/* implicit */int) var_11))))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [(_Bool)1] [i_3 + 3] [i_4] [(_Bool)1])) >> ((+(((/* implicit */int) var_1)))))))));
                            var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5 + 1]))));
                        }
                    } 
                } 
            } 
            arr_16 [i_2] [i_1] = ((/* implicit */short) var_4);
        }
    }
    var_20 = ((/* implicit */short) var_4);
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 306428656)) ? (11895319538752473273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32638))))), (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
}
