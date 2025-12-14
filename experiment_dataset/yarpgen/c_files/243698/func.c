/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243698
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
    var_11 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_3)) & (((/* implicit */int) var_3)))) - (((/* implicit */int) var_4)))) >> (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) arr_1 [i_0]));
        var_12 -= ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-109)), ((unsigned char)167)));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-109))))), (((((/* implicit */_Bool) max(((unsigned short)35022), (((/* implicit */unsigned short) var_0))))) ? (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (var_9)))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((unsigned long long int) (short)-5863)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)127)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) || ((_Bool)1)))) : (((/* implicit */int) var_6))));
    }
    for (short i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_10 [i_1] [(unsigned short)3] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)5863))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15821560301294343505ULL)) ? (arr_7 [i_1 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (short)(-32767 - 1));
                            arr_18 [(_Bool)1] [(_Bool)1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-4336875396631227524LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2] [i_3]))))) : (var_2)));
                        }
                    } 
                } 
            } 
        }
        arr_19 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(arr_16 [i_1 - 3] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1 - 3])))), (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? ((-(var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
        arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) min(((_Bool)1), ((!((_Bool)1)))))) : ((~(((((/* implicit */_Bool) arr_11 [9ULL] [i_1] [(_Bool)1] [12LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))));
    }
}
