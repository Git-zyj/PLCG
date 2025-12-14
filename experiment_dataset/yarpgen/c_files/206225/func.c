/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206225
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_1 - 2])) ? (11757930433697151507ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))), (6688813640012400103ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((int) 3188115886U))) : (266338304U)))))))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) ((max((266338325U), (((/* implicit */unsigned int) arr_0 [i_0])))) > (((((/* implicit */_Bool) arr_1 [i_1])) ? (3196726158U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31844)))))))))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [0ULL] [i_0] [i_0])) | (-1886929554))))));
                arr_4 [i_1 - 2] = ((/* implicit */unsigned short) ((unsigned int) max((((4028628978U) << (((1921736661) - (1921736642))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (11757930433697151487ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-8256)), (((unsigned short) (short)-322)))))) : (((((unsigned int) (short)-31874)) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))))));
                            var_16 += ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [(short)22] [i_5 - 1]))) <= (266338334U))) ? (((unsigned long long int) arr_12 [(_Bool)0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31858)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) arr_5 [(signed char)5]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_2);
}
