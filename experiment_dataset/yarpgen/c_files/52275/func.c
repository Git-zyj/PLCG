/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52275
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
    var_12 &= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -184296756)) ? (8670526309329744646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-512))))) & (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) var_7))));
    var_13 -= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1306233005U)), (-1254823119436450754LL)))) & (((((/* implicit */_Bool) (short)-27368)) ? (1299844521659498328ULL) : (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1048544U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30720))) : (-5977321963640469096LL)));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) (short)16773))))), (min((min((arr_0 [i_2 - 1]), (var_1))), (((/* implicit */long long int) ((_Bool) (unsigned char)126)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        arr_14 [12LL] [2] [(unsigned short)0] [12LL] &= ((/* implicit */unsigned long long int) 2251799780130816LL);
                        var_14 = ((((((/* implicit */_Bool) min((arr_5 [(_Bool)1] [12ULL] [i_0]), (((/* implicit */signed char) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_11 [i_0] [i_1 - 2] [i_2] [(short)17])), ((short)2778))))) : (arr_0 [(_Bool)1]))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_2 - 1] [i_3 - 1]))))));
                    }
                }
            } 
        } 
    } 
}
