/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42073
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
    var_15 &= ((/* implicit */signed char) (+(var_2)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(16445505358368778186ULL)));
        var_16 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_7)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 2440145532U)) != (var_4))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (min((((/* implicit */unsigned int) var_14)), (3503964540U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3503964543U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1])))))))) : (min((-6959844609567270064LL), (((/* implicit */long long int) 791002755U))))));
        arr_7 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 3503964558U)) ? (3503964540U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)152)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) 791002755U)) ? (((/* implicit */unsigned long long int) 377103212794109026LL)) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)511))) ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        var_18 = ((/* implicit */signed char) max((var_18), (var_14)));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        arr_10 [i_2 + 1] = ((/* implicit */_Bool) max((arr_5 [(_Bool)1]), (((/* implicit */unsigned short) var_1))));
        var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [(signed char)6])) || (((/* implicit */_Bool) 40975096U)))) ? (arr_4 [(short)6]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((3703406819U) - (3703406812U))))))))), (min((((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) arr_5 [(short)14]))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_9)))) ? (((((((/* implicit */int) var_10)) + (2147483647))) >> (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 791002755U)), (arr_9 [i_2] [i_2])));
        var_23 = ((/* implicit */long long int) (_Bool)1);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2047)) ? (791002766U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_14 [14] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (791002753U)));
        var_24 = ((/* implicit */unsigned short) 791002769U);
        var_25 = ((/* implicit */short) ((var_3) ? (((/* implicit */unsigned long long int) var_2)) : (16096234797600049913ULL)));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) var_7);
    }
    var_26 &= ((/* implicit */int) (+(min((max((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) var_5))))));
}
