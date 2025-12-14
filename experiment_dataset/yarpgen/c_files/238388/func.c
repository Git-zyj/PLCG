/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238388
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) max((((_Bool) (_Bool)1)), ((!((_Bool)1)))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), (((unsigned int) arr_0 [15ULL] [i_0])))), (max((1001077646U), (((/* implicit */unsigned int) ((unsigned char) var_7)))))));
        var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
        var_20 = ((/* implicit */int) min((3293889637U), (((/* implicit */unsigned int) 2037843593))));
        var_21 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) 3293889650U))), (min((((/* implicit */unsigned long long int) max((123569875), (((/* implicit */int) arr_1 [i_0]))))), ((-(arr_0 [i_0] [11LL])))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(max(((-(arr_3 [(signed char)9] [12U]))), (max((arr_3 [i_0] [i_0]), (3444192350U))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2]))))));
            var_23 = ((/* implicit */int) var_16);
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)14)) ? (-123569851) : (((/* implicit */int) (unsigned char)83)))))));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))), (max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-126)), (4294967282U)))) && ((!(((/* implicit */_Bool) -1076495885)))))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned int) (_Bool)1);
            var_26 = ((/* implicit */int) (-(((long long int) (~(arr_14 [i_3] [i_3] [i_3]))))));
            var_27 = ((/* implicit */long long int) (~(((unsigned long long int) ((unsigned long long int) 6347016811108351337ULL)))));
        }
        for (signed char i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(max(((+(((/* implicit */int) arr_2 [i_5 + 1])))), (((/* implicit */int) ((_Bool) 8U))))))))));
            arr_21 [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) min((max(((short)-4505), (((/* implicit */short) (unsigned char)64)))), (((/* implicit */short) ((_Bool) 3U)))));
        }
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_29 -= ((/* implicit */long long int) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)248))), (((/* implicit */unsigned char) var_6))));
                        arr_31 [i_3] [(signed char)6] [0LL] [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) min((arr_0 [i_3] [i_7]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)19186))) : (arr_22 [i_6] [i_6])))));
                    }
                } 
            } 
        } 
    }
}
