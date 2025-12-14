/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210700
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
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) (unsigned char)204);
                    arr_7 [(_Bool)1] [i_1 + 1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(var_8)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 2]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_9 [i_0 - 1])))) == ((~(((/* implicit */int) var_5)))))))));
            var_12 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_8)))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] |= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (4611686018425290752LL)))) ? ((-(((/* implicit */int) arr_10 [24] [i_4] [i_4])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_0)))));
        var_13 = ((/* implicit */unsigned char) arr_8 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((max((((/* implicit */long long int) var_8)), (var_2))) == (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9))))))), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (-2035148816400379885LL)))) == (((((/* implicit */int) var_0)) + (var_7)))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_6 + 2])) * (((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 2]))))) ? (var_3) : (((/* implicit */unsigned long long int) arr_4 [i_6 - 2] [i_6 - 2]))));
                    arr_22 [i_7] [i_6] [i_5] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (min((13510798882111488ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((var_1) + (var_2))) + (((/* implicit */long long int) 887251720)))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_1)))) && (((/* implicit */_Bool) (-(4294967291U))))));
                }
            }
        } 
    } 
}
