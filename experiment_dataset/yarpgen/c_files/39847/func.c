/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39847
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) | (((/* implicit */int) min(((unsigned char)163), (min((arr_4 [i_0] [i_0] [i_0]), (var_7))))))));
            var_21 *= ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_7)) ? (3280715818916806177LL) : (((/* implicit */long long int) 1310136589U)))))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_0])))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-77)), (min((arr_3 [i_1]), (((((/* implicit */int) (unsigned char)93)) - (var_4))))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)155))));
            var_23 = ((/* implicit */unsigned short) arr_8 [11] [i_2]);
        }
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) arr_13 [i_3] [i_4]);
                    arr_17 [i_3] = ((/* implicit */unsigned int) var_3);
                    arr_18 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) min((var_2), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (1247040500599793715ULL))))) | (min((arr_5 [i_3] [i_3]), (((/* implicit */unsigned long long int) var_5))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) 9324392667659301336ULL);
        var_26 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) <= (((/* implicit */int) ((((arr_5 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned char) ((arr_19 [i_5]) <= (arr_19 [i_5])));
            var_27 = ((/* implicit */long long int) ((short) 1247040500599793728ULL));
        }
        var_28 = ((/* implicit */unsigned int) ((max((min((((/* implicit */long long int) arr_20 [i_5] [i_5])), (arr_19 [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)93)) <= (((/* implicit */int) (unsigned char)92))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)8)), (0U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_5])) <= (var_8)))))))))));
    }
    var_29 = ((/* implicit */short) min((max((2554034023901172957ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_17)))))), (((((1247040500599793712ULL) | (((/* implicit */unsigned long long int) var_15)))) | (((/* implicit */unsigned long long int) var_1))))));
}
