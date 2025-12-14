/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217304
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)21152)) ^ (1593961725)));
            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (12536131087780289385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 0))))))));
            var_23 = ((/* implicit */int) ((long long int) 16893132172385177071ULL));
        }
        arr_8 [(unsigned char)0] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) -1)) <= (12536131087780289385ULL)));
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)21)), (5910612985929262231ULL)))) && (((((((/* implicit */_Bool) 5910612985929262233ULL)) ? (-1) : (((/* implicit */int) (short)21173)))) != (((((/* implicit */_Bool) 469660756)) ? (((/* implicit */int) (_Bool)1)) : (13)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 24; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                arr_16 [i_3] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_15 [i_3 - 2] [i_3] [i_3 - 2])), (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4])) ? (((/* implicit */unsigned int) arr_15 [23] [i_3] [23])) : (686722453U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (5910612985929262231ULL) : (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */int) (short)-8843)) : ((~(arr_15 [i_4] [i_3] [i_3]))))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : ((-(var_16))))))));
                var_25 = ((/* implicit */_Bool) (unsigned short)29428);
            }
        } 
    } 
    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_10)), (12536131087780289385ULL)));
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_9)) - (45080)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) && (var_14))) || (((/* implicit */_Bool) ((long long int) (short)-32762)))))) : (((/* implicit */int) var_3))));
}
