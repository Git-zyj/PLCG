/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38591
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << ((((((_Bool)0) ? (var_1) : (arr_0 [i_0]))) + (4309272486816784063LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((int) arr_1 [i_0])));
        var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)58515)) - (58501))))) : (min((((/* implicit */int) arr_1 [(unsigned char)4])), ((~(((/* implicit */int) var_8))))))))));
        var_13 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) + (((/* implicit */unsigned long long int) var_5))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((arr_3 [i_1]) + (8758207514120132192LL)))))), (3675940282433514295LL)));
        var_15 = (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_1]))))));
    }
    var_16 = var_3;
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_10 [i_2] [i_2 + 3] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_7)))));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_3 [i_2]))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (min((((/* implicit */int) min((var_10), (var_10)))), (((((/* implicit */int) arr_8 [i_2] [i_2] [i_3])) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_3 [i_3 + 2])))) == (var_2))))));
            var_18 = ((/* implicit */short) (unsigned char)221);
        }
        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
        {
            arr_14 [(unsigned short)12] [(unsigned short)12] [i_2] = ((/* implicit */unsigned short) max(((_Bool)1), (((min((var_6), (((/* implicit */unsigned long long int) var_1)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_0)))))))));
            arr_15 [15ULL] [i_4] [i_2] = ((unsigned short) ((max((arr_2 [18LL]), (((/* implicit */unsigned int) var_9)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_19 |= ((/* implicit */unsigned char) ((signed char) 281474976706560LL));
            var_20 = ((/* implicit */long long int) min((-2147483636), (((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) min((-1077433551), (((/* implicit */int) (unsigned char)40))))) : (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) : (-3045920900973484747LL))))), (((((/* implicit */_Bool) (short)11697)) ? (min((((/* implicit */long long int) arr_5 [i_2])), (17592181850112LL))) : (((/* implicit */long long int) ((0) << (((var_4) - (1284886472U))))))))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7))))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)0)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_9)))))))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
        {
            arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_1))) ^ (arr_4 [i_2 + 3])));
            arr_22 [16U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [11])) ? (arr_17 [i_2] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_9))))))));
        }
        var_23 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) ^ (arr_3 [i_2])))) ? (16870791393342778903ULL) : (((/* implicit */unsigned long long int) min((arr_19 [i_2] [i_2] [i_2]), (((/* implicit */int) var_3))))))) >> (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-13)), ((unsigned char)28)))) >> (((arr_17 [12ULL] [i_2 - 2]) + (2022571835757342805LL)))))));
    }
    var_24 = ((/* implicit */short) (~(((long long int) ((unsigned char) (unsigned short)8)))));
}
