/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4199
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
    var_19 = ((/* implicit */unsigned char) var_12);
    var_20 = ((unsigned long long int) max((min(((unsigned short)20717), (((/* implicit */unsigned short) (short)-4886)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)17395)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65535)))) : ((-(2471707252507669789ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (short)5127)))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)-4886)))) : (((((/* implicit */_Bool) 13414026673272708020ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15975036821201881831ULL))))) : (((/* implicit */int) (short)5127))))));
        var_23 += ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)1))))));
        var_24 = ((/* implicit */short) (~(((unsigned long long int) 2471707252507669767ULL))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_25 = ((/* implicit */short) ((unsigned short) 18446744073709551615ULL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_1] = ((unsigned long long int) (unsigned short)37066);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((short) (short)-5113)))));
                arr_11 [i_1] [i_1] [i_1] [i_1] = ((unsigned long long int) (short)19231);
                arr_12 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) 8538612695790296420ULL);
                var_27 = ((/* implicit */unsigned long long int) ((short) 14594984877185352154ULL));
            }
            var_28 ^= ((/* implicit */short) ((unsigned short) (short)12534));
            var_29 ^= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)7));
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_30 *= ((/* implicit */short) min((((/* implicit */unsigned short) min(((short)-19247), (((/* implicit */short) (unsigned char)240))))), (min(((unsigned short)65535), (((/* implicit */unsigned short) (short)19246))))));
                arr_20 [(unsigned char)9] [i_1] [i_1] = (+(((((/* implicit */_Bool) (short)3)) ? (6706186635301414474ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5134))))));
            }
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_31 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (short)-3)))))), (((((/* implicit */_Bool) 14578435658734032886ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27278)))))) : (9531656546183355633ULL)))));
                arr_25 [(short)3] [(short)3] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) (unsigned short)65521)), (140737488224256ULL))));
            }
            var_32 -= ((short) min((((short) (short)-1524)), (((short) 509717578794391727ULL))));
            arr_26 [(unsigned char)1] = ((/* implicit */unsigned char) (-(min((((unsigned long long int) 6473607331932651363ULL)), (16ULL)))));
        }
    }
}
