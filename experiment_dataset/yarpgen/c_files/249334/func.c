/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249334
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (signed char)0))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3992)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? (((((/* implicit */unsigned long long int) var_10)) / (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1])), (var_5))))))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))));
                var_13 = ((int) ((arr_2 [i_0 - 1]) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            arr_11 [i_3] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))))) ? ((-((+(arr_8 [i_2]))))) : (((((/* implicit */_Bool) ((8427627484200784276ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (max((-1165991125), (((/* implicit */int) (short)31)))) : (((/* implicit */int) var_0))))));
            var_14 = ((/* implicit */signed char) min(((~(((unsigned int) 10019116589508767340ULL)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) != ((-(8427627484200784295ULL))))))));
            arr_12 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_3 - 1]))));
        }
        arr_13 [(signed char)8] [i_2] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2] [i_2]))))) / (((long long int) 279223176896970752LL))))) ^ (((8427627484200784276ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9723)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_18 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_7 [i_2]))) + (((((/* implicit */int) ((unsigned short) 10019116589508767339ULL))) + (((/* implicit */int) ((var_1) != (arr_4 [i_4] [i_4] [i_2]))))))));
            arr_19 [i_2] = ((/* implicit */long long int) arr_7 [i_4]);
        }
    }
    var_15 = ((/* implicit */int) ((short) min((max((8427627484200784301ULL), (((/* implicit */unsigned long long int) var_9)))), (max((10019116589508767352ULL), (((/* implicit */unsigned long long int) var_0)))))));
}
