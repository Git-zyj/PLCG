/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234387
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_8 [i_0] [i_0 + 1] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) arr_5 [i_1] [(unsigned char)10])), (((((/* implicit */_Bool) (unsigned short)48039)) ? (((/* implicit */int) arr_3 [(unsigned char)8])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)65526))) ? (((unsigned long long int) (unsigned short)48039)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-8)), (arr_4 [i_0] [(unsigned short)12])))))));
                var_14 = ((/* implicit */int) ((unsigned char) ((unsigned int) (unsigned char)201)));
            }
            var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))), (((int) 18374686479671623680ULL))))) && (((/* implicit */_Bool) arr_3 [i_0]))));
            var_16 = ((/* implicit */signed char) ((unsigned short) var_7));
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_14 [(unsigned short)23] [i_0] [i_0] [i_4] = min(((unsigned short)48039), (((/* implicit */unsigned short) (unsigned char)158)));
                        arr_15 [i_0] [(unsigned short)22] [(unsigned short)0] [(unsigned char)23] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) var_8);
                        arr_16 [i_0] [(unsigned short)3] [(short)5] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)34143)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (_Bool)1)))))))) : (((/* implicit */int) var_10))));
                    }
                } 
            } 
        }
        arr_17 [i_0] [(short)21] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((var_4), (((unsigned char) var_11))))), (((unsigned int) min(((short)32472), (((/* implicit */short) (_Bool)1)))))));
    }
}
