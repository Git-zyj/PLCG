/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237260
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
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)4469)), (-851016690653955137LL)))))) ? (min((((/* implicit */long long int) (~(var_11)))), (min((((/* implicit */long long int) var_4)), (-851016690653955137LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1807635727)), (851016690653955137LL)));
    var_18 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3707671342755808630LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 851016690653955136LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52720))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8589934592LL)) ? (-851016690653955137LL) : (((/* implicit */long long int) 3241425917U))))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)63114)) : (-651937402)))) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [17] [11]) : (16383LL))) : (max((((/* implicit */long long int) var_8)), (var_9)))))) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19577))))) : ((~(var_15))))) : (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [14LL]))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)19591))))))));
                        arr_11 [i_1] [i_0] [i_0] [i_1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (832765607) : (((/* implicit */int) arr_6 [i_0] [1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-64)), (var_2))))) : (min((((/* implicit */unsigned long long int) (unsigned short)57579)), (15775489354969951982ULL))))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((-(((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)24])))))))));
    }
    for (unsigned short i_4 = 2; i_4 < 23; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4 - 2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(4194300U)))), (min((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_4 - 2] [i_4] [i_4]))))), (((((/* implicit */_Bool) 8388607LL)) ? (arr_12 [i_4]) : (var_12)))))));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8777)) ? (min((2671254718739599633ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)20))))))) : (((/* implicit */unsigned long long int) 612611790))));
    }
    for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
    {
        var_21 = (-((-((-(((/* implicit */int) (signed char)63)))))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(min((var_3), (arr_13 [i_5])))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)42983)), (var_12)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [24] [i_5] [i_5]))))) : (max((arr_5 [(short)0] [(short)0]), (((/* implicit */unsigned long long int) var_8))))))));
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        arr_27 [i_7] [i_6] [i_8] [i_9] [i_8] = (~((-((-(var_15))))));
                        var_23 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) arr_21 [i_7] [i_8] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 651937401))))) : (((/* implicit */int) min((var_10), ((signed char)63))))))), (min((((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_5)))), (((((/* implicit */_Bool) (unsigned short)63114)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    var_24 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1646351060417382422LL)))))))) ? ((+(min((((/* implicit */unsigned int) -1786742839)), (4290772995U))))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_2)))))))));
                    var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)120))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20651))) : (((((/* implicit */_Bool) -8696772852930466995LL)) ? (((/* implicit */long long int) 11U)) : (851016690653955136LL))))), (((/* implicit */long long int) min((min(((unsigned short)18983), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-64))))))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(min((((((/* implicit */_Bool) 1798303036)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18983))) : (6190519443070380979ULL))), (min((((/* implicit */unsigned long long int) var_5)), (6190519443070380979ULL))))))))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_6]) : (-3947266619035494870LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_20 [i_10] [i_10])))) : ((~(arr_5 [(unsigned short)22] [(unsigned short)22])))))) ? (min((min((((/* implicit */long long int) var_8)), (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -851016690653955136LL))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_6] [i_11]))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) min(((unsigned short)62082), (((/* implicit */unsigned short) arr_2 [i_6]))))))))));
                }
            } 
        } 
        var_28 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)63))));
    }
    var_29 |= ((/* implicit */long long int) max((min((min((((/* implicit */int) (signed char)26)), (1798303036))), ((-(((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_15)) : (851016690653955114LL)))) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_2))))))));
}
