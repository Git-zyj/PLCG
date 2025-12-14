/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210924
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 -= min((((short) min(((short)19232), (((/* implicit */short) (unsigned char)150))))), (((/* implicit */short) (!(arr_4 [i_0] [i_2 + 1] [i_2 - 1])))));
                    var_13 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1])) == (((/* implicit */int) (short)-19229))))), (((unsigned char) arr_2 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)119)) | (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_9 [i_3] [i_3]))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))) & (((/* implicit */int) arr_5 [i_3] [i_3]))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 -= ((((/* implicit */int) ((((/* implicit */int) (short)5958)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))))))) == (((/* implicit */int) max((var_6), (((/* implicit */short) ((_Bool) var_9)))))));
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 20; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    arr_17 [i_6] [i_6] [i_4 + 1] = ((/* implicit */signed char) ((unsigned char) ((_Bool) var_9)));
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)62101)) ? (((/* implicit */int) (short)9636)) : (((/* implicit */int) (_Bool)0)))) == (((/* implicit */int) ((short) arr_10 [i_4 + 2])))));
                    var_19 = ((/* implicit */_Bool) 2251799276814336ULL);
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */short) var_2)), (arr_13 [(short)17] [i_4 - 1] [i_5 + 2])));
                }
            } 
        } 
    } 
}
