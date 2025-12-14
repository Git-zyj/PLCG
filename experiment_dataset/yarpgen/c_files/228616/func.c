/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228616
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
    var_18 = ((/* implicit */short) max((((/* implicit */int) var_17)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (7607700892508131391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)212)) || (((/* implicit */_Bool) (unsigned short)27216)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)4] [i_0])) ? (((/* implicit */int) (unsigned short)27230)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (_Bool)1)))))))));
        var_21 += ((/* implicit */_Bool) arr_1 [(unsigned short)8]);
        var_22 = ((/* implicit */long long int) arr_0 [i_0] [5LL]);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (signed char)66))))) * (((((/* implicit */int) (signed char)-63)) / (((/* implicit */int) (unsigned short)16542))))));
        var_24 &= ((/* implicit */unsigned short) arr_0 [(unsigned char)5] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 23; i_1 += 3) 
    {
        var_25 = ((/* implicit */short) (_Bool)1);
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38320)) ? (arr_4 [24LL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) ((7655012162465801501ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15977))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1 - 4])))) / (arr_4 [i_1] [i_1])));
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((-3937270766411745117LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_7 [(unsigned short)5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [19LL] [i_3]))) / (2097113655U)))));
            var_28 -= ((/* implicit */unsigned short) arr_8 [i_2] [i_2 - 2]);
        }
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_2 + 1] [i_2 + 1] [i_4]));
            var_29 = (((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)5]))) : (arr_4 [i_2] [i_2]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_4]))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))));
        }
        arr_14 [i_2] = ((/* implicit */signed char) arr_4 [i_2 - 2] [i_2]);
        arr_15 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_2])), ((unsigned short)10237)));
    }
    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        arr_18 [(unsigned short)0] [i_5 - 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-15977)) ? (((5501762822423006777ULL) * (8988765757167499483ULL))) : (((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
        arr_19 [i_5] = ((/* implicit */short) ((unsigned short) (_Bool)1));
    }
}
